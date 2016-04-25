"""add pjsip endpoint_identifier_order

Revision ID: 45e3f47c6c44
<<<<<<< HEAD
Revises: 945b1098bdd
=======
Revises: 371a3bf4143e
>>>>>>> upstream/certified/13.8
Create Date: 2015-03-02 09:32:20.632015

"""

# revision identifiers, used by Alembic.
revision = '45e3f47c6c44'
<<<<<<< HEAD
down_revision = '945b1098bdd'
=======
down_revision = '371a3bf4143e'
>>>>>>> upstream/certified/13.8

from alembic import op
import sqlalchemy as sa


def upgrade():
    op.add_column('ps_globals', sa.Column('endpoint_identifier_order', sa.String(40)))

def downgrade():
    with op.batch_alter_table('ps_globals') as batch_op:
        batch_op.drop_column('endpoint_identifier_order')
