/**
 * Configure your Gatsby site with this file.
 *
 * See: https://www.gatsbyjs.org/docs/gatsby-config/
 */

module.exports = {
  plugins: [
    {
      resolve: `gatsby-source-mysql`,
      options: {
        connectionDetails: {
          host: 'localhost',
          user: 'root',
          password: '048690Admin048690',
          database: 'jamstackbdd'
        },
        queries: [
          {
            statement: 'SELECT * FROM products',
            idFieldName: 'idproducts',
            name: 'products'
          }
        ]
      }
    },
    {
      resolve: `gatsby-source-filesystem`,
      options: {
        name: `markdown-pages`,
        path: `${__dirname}/src/data-files`,
      },
    },
    `gatsby-transformer-remark`,
  ]
}
